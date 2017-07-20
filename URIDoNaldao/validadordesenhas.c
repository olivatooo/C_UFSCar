#include <stdio.h>
#include <string.h>

int isNumber( char *s, char init ) {
    char *c;
    int i;

    for( i = 0; i <= 25; i++ )
    {
        c = strchr( s, init + i );
        if( c != NULL ) 
        {
            return 1;
        }
    }

    return 0;
}

int isChar( char *s ) {
    int i;
    char *c;

    for( i = 0; i <= 9; i++ ) 
    {
        c = strchr( s, '0' + i );
        if( c != NULL ) 
        {
            return 1;
        }
    }

    return 0;
}

int tem_carac_especial( char *s ) {
    int i;
    for( i = 0; i < strlen( s ); i++ ) 
    {
        if( ( s[i] < 'a' || s[i] > 'z' ) && ( s[i] < 'A' || s[i] > 'Z' ) &&
            ( s[i] < '0' || s[i] > '9' ) ) {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    char s[50];
    int invalida;

    while( scanf( " %[^\n]", s ) != EOF ) 
    {
        invalida = 0;

        if( strlen( s ) < 6 || strlen( s ) > 32 ) 
        {
            invalida = 1;
        } else 
        {
            if( isChar( s ) && isNumber( s, 'A' ) && isNumber( s, 'a' ) &&
                !tem_carac_especial( s ) ) 
            {
                invalida = 0;
            } 
            else 
            {
                invalida = 1;
            }
        }

        if( invalida ) {
            printf( "s invalida.\n" );
        } else {
            printf( "s valida.\n" );
        }
    }

    return 0;
}