#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>



int main() {
   /* Comprobar la ocurrencia de error y notificarlo con la llamada perror(3) */      
if (setuid(0) == -1){ //devuelve -1 si hay error
	perror("Error");
   
}
    return 1;
}

