class App {
	constructor(descargas, puntuacion, peso){
		this.descargas = descargas;
		this.puntuacion = puntuacion;
		this.peso = peso;
		this.iniciada = false;
		this.instalada = false;

	}
	// Se identifican los metodos o funciones principales. 

	   	abrir(){
	   	if (this.iniciada == false && this.instalada == true){
	   		this.iniciada = true;
	   		alert("App encendida"); 
	   	}
	}
		cerrar(){
		   	if (this.iniciada == true && this.instalada == true){
		   		this.iniciada = false;
		   		alert("App apagada"); 
		}
	}
		instalar(){
			if (this.instalada == false){
				this.instalada = true;
				alert("Aplicacion instalada")
		}
	}

		desinstalar(){
			if (this.instalada == true){
				this.instalada = false;
				alert("Aplicacion desinstalada")
			}
	}
		appInfo(){
			return `
			Descargas : <b>${this.descargas}</b></br>
			Puntuacion : <b>${this.puntuacion}</b></br>
			Peso : <b>${this.peso}</b></br>`		}
}


app = new App("16,000", "4.5 Estrellas", "150 Mb");
app2 = new App("1,000", "4 Estrellas", "75 Mb");
app3 = new App("6,000", "2 Estrellas", "450 Mb");
app4 = new App("10,000", "4.8 Estrellas", "650 Mb");
app5 = new App("12,000", "3.7 Estrellas", "250 Mb");
app6 = new App("14,000", "4.5 Estrellas", "150 Mb");
app7 = new App("15,000", "4.9 Estrellas", "350 Mb");
//app9 = new App("900", "2.9 Estrellas", "750 Mb");

document.write(`
	${app.appInfo()} <br>
	${app2.appInfo()} <br>
	${app3.appInfo()} <br>
	${app4.appInfo()} <br>
	${app5.appInfo()} <br>
	${app6.appInfo()} <br>
	${app7.appInfo()} <br>
`);

// app.instalar();
// app.abrir()
// app.cerrar()
// app.desinstalar(); 


	
// constructor(descargas, puntuacion, peso){

