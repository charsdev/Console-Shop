#ifndef QUOTESTEPSCREEN_H
#define QUOTESTEPSCREEN_H

#include <iostream>
#include "Screen.h"
#include "QuoteStepInput.h"

class QuoteStepScreen : public Screen {
private:
	QuoteStepInput* m_quoteStepInput = nullptr;
public:
	QuoteStepScreen() {
		m_quoteStepInput = new QuoteStepInput(this);
	}

	void OnOpen() override {
		OnScreen();
	}

	void OnScreen() override {
		std::cout << "Welcome to QuoteStepScreen" << std::endl;
		std::cout << "Press 3 if you want to back to main screen" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
		m_quoteStepInput->HandleInput();
	}

	void OnClose() override
	{
		Screen::Clear();
	}

	void Step2TshirtA() {
		std::cout << "PASO 2.a: La camisa a cotizar, ¿Es manga corta?" << std::endl;
		std::cout << "1) SÍ" << std::endl;
		std::cout << "2) No" << std::endl;
	}

	void Step2TShirtB() {
		std::cout << "PASO 2.b: La camisa a cotizar, ¿Es cuello Mao?" << std::endl;
		std::cout << "1) Sí" << std::endl;
		std::cout << "2) No" << std::endl;
	}

	void Step2Trouser() {
		std::cout << "PASO 2: El pantalón a cotizar, ¿Es Chupin?" << std::endl;
		std::cout << "1) Sí" << std::endl;
		std::cout << "2) No" << std::endl;
	}

	void Step3() {
		std::cout << "PASO 3: Seleccione la calidad de la prenda" << std::endl;
		std::cout << "1) Standard" << std::endl;
		std::cout << "2) Premium" << std::endl;
	}

	void Step4() {
		std::cout << "PASO 4: Ingrese el Precio Unitario de la prenda a cotizar" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
	}

	void Step5() {
		std::cout << "INFORMACIÓN:" << std::endl;
		std::cout << "EXISTE x CANTIDAD DE STOCK DE LA PRENDA SELECCIONADA:" << std::endl;

		std::cout << "PASO 5: Ingrese la cantidad de unidades a cotizar" << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
	}
};
#endif // QUOTESTEPSCREEN_H
