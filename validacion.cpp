#include "validacion.h"
bool val_num(const char var_evaluar[], int lon) {
    for (int i=0; i<lon; i++) {
        if(!isdigit(var_evaluar[i])) {  // Verificar cada car�cter en la cadena
            return false;  // Si encuentra un car�cter que no es d�gito, retorna falso
        }
    }
    return true;  // Si todos los caracteres son d�gitos, retorna verdadero
}
