#include <stdio.h>
#include <string.h>

int TAM_ALFABETO= 25;

int isChar( char *senha, char init ) {
    char *c;
    int i;

    for( i = 0; i <= TAM_ALFABETO; i++ ) {
        c = strchr( senha, init + i );
        if( c != NULL ) {
            return 1;
        }
    }

    return 0;
}

int isNumber( char *senha ) {
    int i;
    char *c;

    for( i = 0; i <= 9; i++ ) {
        c = strchr( senha, '0' + i );
        if( c != NULL ) {
            return 1;
        }
    }

    return 0;
}

int tem_carac_especial( char *senha ) {
    int i;
    for( i = 0; i < strlen( senha ); i++ ) {
        if( ( senha[i] < 'a' || senha[i] > 'z' ) && ( senha[i] < 'A' || senha[i] > 'Z' ) &&
            ( senha[i] < '0' || senha[i] > '9' ) ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char senha[50];
    int invalida;

    while( scanf( " %[^\n]", senha ) != EOF ) {
        invalida = 0;

        if( strlen( senha ) < 6 || strlen( senha ) > 32 ) {
            invalida = 1;
        } else {
            if( isNumber( senha ) && isChar( senha, 'A' ) && isChar( senha, 'a' ) && !tem_carac_especial( senha ) ) 
            {
                invalida = 0;
            } else 
            {
                invalida = 1;
            }
        }

        if( invalida ) {
            printf( "Senha invalida.\n" );
        } else {
            printf( "Senha valida.\n" );
        }
    }

    return 0;
}