#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
 (*mi_mapa) [llave]= valor;//llamo el apuntador de mi mapa y luego asigno el valor junto la llave
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
     return mi_mapa[llave];//solo llamo ami mapa por medio de mi variable llave
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
 //solamente agrego valores a mi mapa
    map<string,int> semana;
    semana["lunes"]=1;
    semana["martes"]=2;
    semana["miercoles"]=3;
    semana["jueves"]=4;
    semana["viernes"]=5;
    semana["sabado"]=6;
    semana["domingo"]=7;
return semana;
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // se declara un set nuevo
        for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // recorremos el set con iterador
                {
                for(set<int>:: iterator it2= mi_set2.begin(); it2 != mi_set2.end(); it2++) // reccorremos el segundo set con iterador
            {
        if(*it == *it2) // veo si los elementos de los dos set son iguales
        {
            mi_set3.insert(*it); // pongo los elementos que sean iguales
        }
            }
                }
    return mi_set3; // retorno los elementos del set
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
        set<int> mi_set3; // declara un set nuevo
    for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // usamos el iterador para ver los elementos del set1
    {
    for(set<int>:: iterator it2 = mi_set2.begin(); it2!= mi_set2.end(); it2++) //usamos el iterador para ver los elementos del set2
        {
            mi_set3.insert(*it); // pongo los elementos del set 1
            mi_set3.insert(*it2); // pongo los elementos del set 2
        }
    }
    return mi_set3; // retorna los elemento de mi set3 que agregue anteriomente
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> set3; // declara un set 3
        for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++) // se recorre el set {
        for(set<int>::iterator it2 = mi_sub_set.begin(); it2!= mi_sub_set.end(); it2++) // reccore el segundo set
{
        if(*it==*it2) // para ver las intersecciones
            {
                set3.insert(*it); // meto las intersecciones
            }
}
    if(set3==mi_sub_set) // vinedo si las interscciones son iguales al suconjunto
        {
            return true; // devuelve true
        }
            return false; // devuelve false
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
