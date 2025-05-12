#include "ecop11a.h"
#define M_PI 3.14159265358979323846 // Definição de M_PI caso não esteja disponível
#include <math.h>

// Função para calcular o volume de um cubo
float cubo(float aresta) {
    return pow(aresta, 3);
}

// Função para calcular o volume de um paralelepípedo
float paralelepipedo(float largura, float profundidade, float altura) {
    return largura * profundidade * altura;
}

// Função para calcular o volume de uma esfera
float esfera(float raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

// Função para calcular o volume de um cilindro
float cilindro(float raio, float altura) {
    return M_PI * pow(raio, 2) * altura;
}

// Função para calcular o volume de uma pirâmide
float piramide(float largura, float profundidade, float altura) {
    return (largura * profundidade * altura) / 3.0;
}

