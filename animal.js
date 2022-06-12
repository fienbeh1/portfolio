class animal {
	constructor(especie, edad, color){
		this.especie = especie;
		this.edad = edad;
		this.color = color;
		this.info = `Soy un ${this.especie}, tengo  ${this.edad} anos y soy de color ${this.color}`;
	}
	 verInfo(){
		document.write(this.info +"." + "<br>")
	}
	ladrar()
}

let schnauzer 					= new animal ("Schnauzer", 		3, "gris");
let rottweiler 					= new animal ("Rottweiler", 	2, "negro");
let frenchPoodle 				= new animal ("French Poodle", 	4, "blanco");


schnauzer.verInfo();
rottweiler.verInfo();
frenchPoodle.verInfo();
	//document.write("Soy " + schnauzer.especie + "tengo " + schnauzer.edad);
//document.write(schnauzer.especie);
//document.write(schnauzer.especie);

