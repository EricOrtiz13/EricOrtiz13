#include "velocidad.h"

//----------------------------------------------------------------------------
//Constructor
velocidad::velocidad(int tasa, int paridad)
{
    this->tasa = tasa;
    this->paridad = paridad;


}

//----------------------------------------------------------------------------
//Destructor
velocidad::~velocidad()
{

}

void velocidad::setTasa(int tasa)
{
    this->tasa = tasa;
}

void velocidad::setParidad(int paridad)
{
    this->paridad = paridad;
}
