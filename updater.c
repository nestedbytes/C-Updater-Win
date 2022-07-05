#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

	

void main( int argc, char **argv) {

 
	
     system("powershell Invoke-WebRequest https://raw.githubusercontent.com/shourgamer2/C-Updater-Win/main/version.txt  -OutFile C:/Windows/Temp/version.txt");
  FILE *f2 = fopen("C:/Windows/Temp/version.txt","r");

  char line[BUFSIZ];
  while (fgets(line, sizeof line, f2)) {
  if (strstr(line, "1.0.0")) {
printf("You are in correct version !\n");

  }
else{
printf("Outdated ! Go to https://github.com/shourgamer2/C-Updater-Win");
system("start https://github.com/shourgamer2/C-Updater-Win ");

}   






   

  
  }


 
}
