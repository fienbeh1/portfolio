class animal {
	constructor(especie, edad, color){
		this.especie = especie;
		this.edad = edad;
		this.color = color;
		this.info = 'Soy ${this.especie}, tengo ${this.edad} anos y soy de color {$this.color}';
	}
	verInfo(){
		document.write(this.info + "<br>")
}
}

let schnauzer 		= 	new animal ("Schnauzer", 3, "Gris");
let rottweiler 		= 	new animal ("Rottweiler", 2, "Negro");
let frenchPoodle	= 	new animal ("French Poodle", 4, "Blanco");
let pug 			=	new animal ("Pug", 6, "Cafe");

schnauzer.verInfo();
frenchPoodle.verInfo();


