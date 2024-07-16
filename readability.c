#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include<math.h>

int main(void){

    char c;
    int verletra, verpalavra, lenght, numletra, numpalavra, numfrase, indexaprox;
    float meletra, mefrase, index;

    string text = get_string("Insira o texto aqui: ");

    lenght = strlen(text);

    for(int i = 0; i <= lenght; i++)
    {
        c = text[i];
        verletra = isalpha(c);
        verpalavra = isgraph(c);
        //printf("C é:%c\n", c);
        //printf("Verletra é:%i\n", verletra);
        //printf("Verpalavra é:%i\n", verpalavra);
        if(verletra != 0)
        {
            numletra = numletra +1;
        }
        if(verpalavra == 0)
        {
            numpalavra = numpalavra +1;
        }
        if(c == '.' || c == '!' || c == '?')
        {
            numfrase = numfrase +1;
        }
    }

    //printf("O número de letras é: %i\n", numletra);
    //printf("O número de palavras é: %i\n", numpalavra);
    //printf("O número de frases é: %i\n", numfrase);

    meletra = (numletra * 100)/(float)numpalavra;
    mefrase = (numfrase * 100)/(float)numpalavra;

    //printf("A média de letras é: %f\n", meletra);
    //printf("A média de frases é: %f\n", mefrase);

    index = (0.0588*meletra)-(0.296*mefrase)-15.8;
    indexaprox = round(index);

    //printf("O index é: %f\n", index);
    //printf("O index aproximado é: %i\n", indexaprox);

    if(indexaprox < 1)
    {
        printf("Before Grade 1\n");
    } else if (indexaprox >= 16)
        {
            printf("Grade 16+\n");
        } else
            {
                printf("Grade %i\n",indexaprox);
            }
}
