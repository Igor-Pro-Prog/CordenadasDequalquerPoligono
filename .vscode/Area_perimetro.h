#ifndef _AREA_PERIMETRO_H
#define _AREA_PERIMETRO_H

// DECRITORES 
typedef struct ponto Ponto;
typedef struct poligno Poligono;

// funções
Poligono *criarPoligono();
int adicionarPontoPoligono(Ponto ponto, Poligono *poligono);
int removerPontoPoligono(Poligono* poligono, int indice);
int destruirPoligono(Poligono* poligono);

double calcularPerimetroPoligono(Poligono* poligono);
double calcularAreaPoligono(Poligono* poligono);

#endif
