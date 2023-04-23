//2200003637 - Emre Koca


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void reverse_name(char *name); //this function for reverse_name

int main(void) {

	char name[100];
	
	printf("Enter a first and last name: ");
	
	fgets(name, 100, stdin);

	// remove newline character from input string
	name[strcspn(name, "\n")] = ' ';


	reverse_name(name); //we are calling our func



	return 0;
}
void reverse_name(char* name) {

	char first_name[40], last_name[50];
	int length;
	int length_last_name;
	int unexpected_character_1=0;
	int unexpected_character_2= 0;
	int a = 0;
	int b = 0;
	int farkli = 0;
	
	int space_before_first_name = 0;
	char first_name_letter;
	length = strlen(name); //calculates the length of the name
	int new_length = length;

	for (int z = 0; z < length; z++) {   //this function checks space before the first name.
		if (name[z] == ' ') {                
			space_before_first_name++;       
		}
		if (name[space_before_first_name - 1] != name[space_before_first_name]) {
			
			farkli++;
		}
		if (farkli==1) {
			
			break;
		}
		
	}
	if (space_before_first_name>0){ //if space before the first name,we are deleting this spaces
	for (int g = 0; g < length - space_before_first_name - 1; g++) {
		name[g] = name[g + space_before_first_name];
		
	}
	new_length = length - space_before_first_name - 1;
	}
	

	

	for (int i = 0; i < new_length; i++) {  //this function assign first name and last name. also checks if have space
		{
		
		 {
			{
				if (name[i] == ' ') {
					unexpected_character_2 = 1;

				}
				else if (name[i] != ' ') {
					if (unexpected_character_2 == 1) {
						last_name[a] = name[i];
						a++;

					}
					else {
					
						first_name[b] = name[i];
						b++;

					}
				}
			}
		}
		}
	}
	
		
	last_name[a] = '\0'; //The line "last_name[a] = '\0'" adds a null character at the end of the "last_name" array, which signals the end of the string.
	
	length_last_name = strlen(last_name); //calculates the length of the last name
	
	
	printf("%s, %c.\n",last_name,name[0]);


	
	
}