#include <stdio.h>
#include <math.h>

typedef struct {
    char name[50];
    char avtor[50];
    int year;
} Book;
void printBook(Book b){
    printf("%s-%s(%d)\n",b.name, b.avtor, d.year);
}
Book create BookFromString(char*string){
    Book d;
    char*t=string;
    while(*t !=';'){
        b.name [i]=*t;
        t++;
        i++;
    }
    b.name[i]='\0';
    t++;
    i=0;
    while (*t != 'i'){
        b.avtor[i]=*t;
        t++;
        i++;
    }
    b.avtor[i]='\0';
    char year[5];
    while(*t!='\0'){
        year[i]=*t;
        i++;
        t++;
    }
    year[i]='\0'
    b.year=avtor(year);
    int main(){
        FILE*f=fopen("books,txt","rt");
        if(if == NULL){
            printf
            return 0;
        }
        int n;
        fscanf(file,"%d",&n);
        fgetc(file);
        int main(){
            char string [100];
            Book*books=malloc(sizeof(Book)*n);
            for (int i=0; i< n ; i++);
            fgets(string ,f , 100);
            Book book = createBookFromString(string);
            books[i]=book;
        }
        fclose(f);
        int min Year = book [0] year;
        for(int i=1;i<4;i++){
            if(books[i]year==minYear){
                printf("!");
            }
            print Book(books[i]);
        }
        free(books);
        return 0;
    }
}
