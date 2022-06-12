
class Celular{
	constructor(color, peso, tamano, rdc, ram){
		this.color = color;
		this.peso = peso;
		this.tamano = tamano;
		this.resolucionDeCamara = rdc;
		this.memoriaRam = ram;
		this.encendido = false; 
	}
}
	presionarBotonEncendido()
		if (this.encendido == false){
			alert("El celular esta prendido");
			this.encendido = true;
		}else{
			alert ("El celular esta apagado ya estaba encendido");
			this.encendido = false;
	}

	reiniciar()
		if (this.encendido == true){
			alert("Reiniciar");
		} else { 
			alert("El celular esta apagado");
		}

	tomarFoto()
		alert(`Foto tomada con resolucion de: ${this.resolucionDeCamara}`)
		
	grabarVideo()
		alert(`Video tomado con resolucion de: ${this.resolucionDeCamara}`)
		
	mobileInfo()
		return `
		Color : <b>${this.color}</b></br>
		Peso : <b>${this.peso}</b></br>
		Tamano : <b>${this.tamano}</b></br>
		Resolucion de Video : <b>${this.resolucionDeCamara}</b></br>
		Memoria Ram : <b>${this.memoriaRam}</b></br>
		`;
	
	
	

celular1 = new Celular("rojo", "150 g", "5", "HD", "1 GB" );
celular2 = new Celular("negro", "155 g", "5.4", "Full HD", "2 GB" );
celular3 = new Celular("blanco", "146 g", "5.9", "Full HD", "2 GB" );

/*celular1.presionarBotonEncendido();
celular1.tomarFoto();
celular1.grabarVideo();
celular1.reiniciar();
celular1.presionarBotonEncendido();
*/
document.write(`
	${celular1.mobileInfo()} <br>
	${celular2.mobileInfo()} <br>
	${celular3.mobileInfo()} <br> 
	`);




class CelularAltaGama {
	constructor(color, peso, tamano, rdc, ram, rdce){
		super(color, peso, tamano, rdc, ram);
		this.resolucionDeCamaraExtra = rdce;
	}
	grabarVideoLento(){
		alert("Grabar Video Lento");
	}
	reconocimientoFacial(){
		alert("Iniciando Reconocimiento Facial")
	}
}



class Modular (){
	constructor(cd,radio, cassette){
		this.DiscoCompacto = cd;
		this.Radio = radio; 
		this.Cassette = cassette;
	}
}

class SuperModular (){
	constructor(cd, cd2, radio, cassette){
		super(cd, radio, cassette);
		this.cdSuper = cd2;
		}
	}
}

class SuperModular (){
	constructor(cd, cd2, radio, cassette){
		super(cd,radio, cassette):
		this.cdSuper = cd2;
	}
}


class SuperModular