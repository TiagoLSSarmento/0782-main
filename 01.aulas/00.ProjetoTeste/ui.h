#ifndef UI_H
#define UI_H




/**
 * Solicita um inteiro ao utilizador
 * @param propmp String a ser apresentada ao user
 * @return inteiro inserido pelo user, ou zero em caso de erro
 */
int pedirInteiro(char *prompt);

/**
 * Solicita um double ao utilizador
 * @param propmp String a ser apresentada ao user
 * @return double inserido pelo user, ou zero em caso de erro
 */
double pedirDouble(char *prompt);

/**
 * Solicita uma string ao utilizador
 * @param propmp String a ser apresentada ao user
 * @param dest string de destino
 * @param max número máximo de caracteres a ler
 */
void pedirString(char *prompt, char *dest, int max);

#endif // UI_H

