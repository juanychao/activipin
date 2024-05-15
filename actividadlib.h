#include"actividadlib.h"
#include "MKL25Z.h"
 void asigestadopin(pin1,est){
    PTA->PSOR&(est<<pin1);
}
char estadoled(pin){
    if((PTA->PDIR&(1<<pin)) == 1)
    {
        return 'a';
    } else {
        return 'i';
    }

}
