#ifndef VELOCIDAD_H
#define VELOCIDAD_H

class velocidad
{
    public:
        //constructor
        velocidad(int tasa, int paridad);
        //destructor
        ~velocidad();
        //set
        void setTasa(int tasa);
        void setParidad(int paridad);

};

#endif // VELOCIDAD_H
