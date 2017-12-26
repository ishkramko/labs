#include <stdio.h>

typedef struct Student{
    char* name;
    char* surname;
    int gpa;
    int years;
}
Student;

void print(Student p){
    printf("%s-%s (%d) \n", p.name, p.surname, p.gpa);
}


int main(){
    Student students[5];
    students[0].name="Sasha";
    students[0].surname="Kogut";
    students[0].gpa=4;
    students[0].years=13;
    students[1].name="Misha";
    students[1].surname="Laba";
    students[1].gpa=2;
    students[1].years=13;
    students[2].name="Olya";
    students[2].surname="Galushka";
    students[2].gpa=4;
    students[2].years=14;
    students[3].name="Iryna";
    students[3].surname="Kostuk";
    students[3].gpa=5;
    students[3].years=14;
    students[4].name="Sasha";
    students[4].surname="Kurtash";
    students[4].gpa=5;
    students[4].years=14;
    Student best=students[0];
    for(int i=0;i<5;i++){
        if(students[i].gpa> best.gpa){
            best=students[i];
        }
    }
    
    for(int i=0;i<5;i++){
        
        if(students[i].gpa==best.gpa){
            printf("!");
        }
        print (students [i]);
    }
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
}

