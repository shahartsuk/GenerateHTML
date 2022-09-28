#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

void putInHtmlFile(char[100]);
void picturesHtml();
void greenDIV();

int main_1_2()
{
    char str[1000];
    strcpy(str,"<html><head><title>hi</title></head><body><img src=\"dogimg.jpg\" width=\"300px\"/></body></html>");
    putInHtmlFile(str);
    picturesHtml();
    greenDIV();
}

void putInHtmlFile(char strHtml[1000])
{
    FILE* f = fopen("HtmlInCLan.html", "w");
    if (!f)
    {
        printf("error1");
        exit(1);
    }
    
        fputs(strHtml, f);
    
    
    fclose(f);
}

void picturesHtml()
{
    char strHtml[1000];

    FILE* f = fopen("Htmlimages.html", "w");
    if (!f)
    {
        printf("error1");
        exit(1);
    }

    strcpy(strHtml, "<html><head><title>20images</title></head><body>");
    fputs(strHtml, f);

    strcpy(strHtml, "<img src=\"dogimg.jpg\" width=\"300px\"/>");

    for (int i = 0; i < 10; i++)
    {
    fputs(strHtml, f);
    }

    strcpy(strHtml, "</body></html>");
    fputs(strHtml, f);

    fclose(f);
}

void greenDIV()
{
    char strHtml[1000];

    FILE* f = fopen("greendiv.html", "w");
    if (!f)
    {
        printf("error1");
        exit(1);
    }

    strcpy(strHtml, "<html><head><title>20images</title></head><body>");
    fputs(strHtml, f);

    strcpy(strHtml, "<div style=\"background-color:green;\"><img src =\"dogimg.jpg\" width=\"300px\"/></div>");
        fputs(strHtml, f);

    strcpy(strHtml, "</body></html>");
    fputs(strHtml, f);

    fclose(f);
}

