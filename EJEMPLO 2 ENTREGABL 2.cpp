#include <fstream>
#include <iomanip>
#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

//Declare variables
const int MAX_CHAR = 100;
const int Title_W = 40;
const int Artist_W = 40;
const int Duration_W = 40;
const int Album_W = 40;

//Create a type song
struct song
{
    char title[MAX_CHAR];
    char artist[MAX_CHAR];
    char duration[MAX_CHAR];
    char album[MAX_CHAR];
};

//Declare functions
void displyOpt();
char option();
void readinSearch(char search[]);
void readInput (const char prompt[], char inputStr[], int maxChar);
void executeOption(char opt, song list[], int& listSize);
void allSongs(const song list[], int listSize);
void readInEntry(song& anEntry);
void addEntry(const song& anEntry, song list[], int& listSize);
bool artistSearch(const char search[], const song list[], int listSize);
bool albumSearch(const char search[], const song list[], int listSize);
void loadFile(const char fileName[], song list[], int& listSize);
void saveFile(const char fileName[], const song list[], int listSize);
void rmSong(song list[], int& listSize);

//Main function
int main()
{
    int listSize;
    char opt;
    song list[MAX_CHAR];
    char fileName[] = "songs.txt";

    loadFile(fileName, list, listSize);
    displyOpt();
    opt = option();
    //while user doesn't exit, display menu
    while (opt != 'f')
    {
        executeOption(opt, list, listSize);
        displyOpt();
        opt = option();
    }
    saveFile(fileName, list, listSize);

    return 0;
}

//The menu
void displyOpt()
{
    cout << "\n\nWelcome to Jonathon's Music Manager.\n\n"
    << "a) View all songs.\n"
    << "b) Add a new song.\n"
    << "c) Search for songs by artist.\n"
    << "d) Search for songs by album.\n"
    << "e) Delete a song by index number.\n"
    << "f) Exit\n"
    << "Please make a selection: ";
}

//Read in user input
char option()
{
    char opt;
    cin >> opt;
    cin.ignore(100, '\n');
    return tolower(opt);
}

//Menu options
void executeOption(char opt, song list[], int& listSize)
{
    song entry;
    char search[MAX_CHAR];
    switch (opt)
    {
        case 'a': allSongs(list, listSize);
            break;

        case 'b': readInEntry(entry);
            addEntry(entry, list, listSize);
            allSongs(list, listSize);
            break;

        case 'c': readinSearch(search);
            artistSearch(search, list, listSize);
            break;

        case 'd': readinSearch(search);
            albumSearch(search, list, listSize);
            break;

        case 'e': rmSong(list, listSize);
            break;

        case 'f': //saveFile(fileName, list, listSize);
            cout << "Saving Changes." << endl;
            break;

        default: cout << endl << "Invalid option." << endl;
            break;
    }
}

//Display all the songs' information in different columns.
void allSongs(const song list[], int listSize)
{
    int index;
    cout << setw(Title_W) << "Title"
    << setw(Artist_W) << "Artist"
    << setw(Duration_W) << "Duration"
    << setw(Album_W) << "Album"
    << endl;

    for(index=0; index<listSize; index++)
    {
        cout << index << setw(Title_W) << list[index].title
        << setw(Artist_W) << list[index].artist
        << setw(Duration_W) << list[index].duration
        << setw(Album_W) << list[index].album
        << endl;
    }
    cout << "Number of record: " << listSize << endl;

}

void readInput (const char prompt[], char inputStr[], int maxChar)
{
    cout << endl << prompt;
    //read until reach the limit or a new line
    cin.get(inputStr, maxChar, '\n');

    while(!cin)
    {
        cin.clear ();
        cin.ignore (100, '\n');
        cout << endl << prompt;
        cin.get(inputStr, maxChar, '\n');
    }
    cin.ignore (100, '\n');
}
//searches for word user enters
void readinSearch(char search[])
{
    readInput("Please enter the name of the artist or album: ", search, MAX_CHAR);
}

//Search the artist column
bool artistSearch(const char search[], const song list[], int listSize)
{
    int index;
    bool found = false;
    // lists number of matched songs
    cout << "Here are the matched songs: " << endl;

    for(index=0; index<listSize; index++)
    {
        cout << index << endl;

        if(strcmp(search, list[index].artist) == 0)
        {
            cout << index << setw(Title_W) << list[index].title
            << setw(Artist_W) << list[index].artist
            << setw(Duration_W) << list[index].duration
            << setw(Album_W) << list[index].album
            << endl;
            found = true;
        }
    }
    //When nothing is found display error
    if ( found == false)
    {
        cout << "No matches found." << endl;
    }
    return found;
}
//Search for album
bool albumSearch(const char search[], const song list[], int listSize)
{
    int index;
    bool found = false;
    cout << "Number of record: " << listSize << endl;
    cout << "Here are the matched songs: " << endl;
    for(index=0; index<listSize; index++)
    {
        cout << index << endl;
        if(strcmp(search, list[index].album) == 0)
        {
            cout << list << endl;
            cout << index << setw(Title_W) << list[index].title
            << setw(Artist_W) << list[index].artist
            << setw(Duration_W) << list[index].duration
            << setw(Album_W) << list[index].album
            << endl;
            found = true;
        }
    }

    if ( found == false)
    {
        cout << "No matches found." << endl;
    }
    return found;

}
//When user want to add a new song, displays info
//asks input for each catagory
void readInEntry(song& anEntry)
{
    char title[MAX_CHAR];
    char artist[MAX_CHAR];
    char duration[MAX_CHAR];
    char album[MAX_CHAR];

    //read in name
    readInput("Please enter the title: ", title, MAX_CHAR);
    readInput("Please enter the artist: ", artist, MAX_CHAR);
    readInput("Please enter the length of the song: ", duration, MAX_CHAR);
    readInput("Please enter the name of the album: ", album, MAX_CHAR);

    //populate the passed in object
    strcpy(anEntry.title, title);
    strcpy(anEntry.artist, artist);
    strcpy(anEntry.duration, duration);
    strcpy(anEntry.album, album);
}

//Add the information user entered into each respective column.

void addEntry(const song& anEntry, song list[], int& listSize)
{
    strcpy(list[listSize].title, anEntry.title);
    strcpy(list[listSize].artist, anEntry.artist);
    strcpy(list[listSize].duration, anEntry.duration);
    strcpy(list[listSize].album, anEntry.album);
    listSize++;
}
//Load the text file that contains the music information.
void loadFile(const char fileName[], song list[], int& listSize)
{
    ifstream in;
    char title[MAX_CHAR];
    char artist[MAX_CHAR];
    char duration[MAX_CHAR];
    char album[MAX_CHAR];
    song anEntry;
    in.open (fileName);

    if(!in)
    {
        in.clear();
        cerr << endl << "Fail to open " << fileName << " for input!" << endl << endl;
        exit(1);
    }
    in.get(title, MAX_CHAR, ';');
    while (!in.eof())
    {
        //removes ';' and reads next data.
        in.get();
        in.get(artist, MAX_CHAR, ';');
        in.get();
        in.get(duration, MAX_CHAR, ';');
        in.get();
        in.get(album, MAX_CHAR, ';');
        in.get();
        in.ignore(100, '\n');
        strcpy(anEntry.title, title);
        strcpy(anEntry.artist, artist);
        strcpy(anEntry.duration, duration);
        strcpy(anEntry.album, album);
        addEntry(anEntry, list, listSize);

        in.get(title, MAX_CHAR, ';');       //next record
    }
    in.close();
}

//Save changes to the file
void saveFile(const char fileName[], const song list[], int listSize)
{
    ofstream out;
    int   index;
    out.open (fileName);

    if(!out)
    {
        out.clear();
        cerr << endl << "Fail to open " << fileName << " for output!" << endl << endl;
        exit(1);
    }

    for(index=0; index<listSize; index++)
    {
        out << list[index].title << ';'
        << list[index].artist << ';'
        << list[index].duration << ';'
        << list[index].album << ';'
        << endl;
    }
    out.close();
}
//remove song by index number
void rmSong(song list[], int& listSize)
{
    int index;
    cout << "Enter the index number of the song to delete: ";
    cin >> index;
    if (index < 0 || index >= listSize)
    {
        cout << "Invalid option." << endl;
        return;
    }

    // remove last item
    if (index == listSize - 1)
    {
        listSize = listSize - 1;
    }
    else
    {
        strcpy(list[index].title, list[listSize - 1].title);
        strcpy(list[index].artist, list[listSize - 1].artist);
        strcpy(list[index].duration, list[listSize - 1].duration);
        strcpy(list[index].album, list[listSize - 1].album);
        listSize = listSize - 1;
    }
    cout << "Your list has been updated." << endl;
    allSongs(list, listSize);
}
