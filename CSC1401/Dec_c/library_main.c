#include <stdio.h>
#include "library.h"
#define SIZE 100

int main(void) {
    int findex, index = 0, nbf, found_indexes[SIZE], i;
    book_t* library[SIZE];
    
    book_t book1 = {.title = "Cent ans de solitude", .np = 200, .author = "Gabriel Garcia Marquez", .edition = 1980};
    book_t book2 = {.title = "La Peste", .np = 200, .author = "Albert Camus", .edition = 1988};
    book_t book3 = {.title = "Homo Sapiens, A brief history of humankind", .np = 200, .author = "Noah Harari", .edition = 1980};
    book_t book4 = {.title = "The origin of species", .np = 200, .author = "Charles Darwin", .edition = 1980};
    book_t book5 = {.title = "The girl with the dragon tattoo", .np = 200, .author = "Stieg Larsson", .edition = 2005};
    book_t book6 = {.title = "The girl who played with fire", .np = 200, .author = "Stieg Larsson", .edition = 2006};
    book_t book7 = {.title = "The girl who kicked the hornets' nest", .np = 200, .author = "Stieg Larsson", .edition = 2007};

    add_book(library, &book1, index++);
    add_book(library, &book2, index++);
    add_book(library, &book3, index++);
    add_book(library, &book4, index++);
    add_book(library, &book5, index++);
    add_book(library, &book6, index++);
    add_book(library, &book7, index++);
    
    printf("Searching for the first book, if any, whose title contains 'Peste'\n");
    findex = search_first_book_by_keyword(library, "Peste", index);
    if (findex >= 0)
        printf("%s\n\n", library[findex]->title);
    else
        printf("Not found\n\n");
    
    printf("Seaching for all the books whose title contains 'girl'\n");
    nbf = search_all_books_by_keyword(library, "girl", index, found_indexes);

    /**
     * There is no need to check whether nbf is different from 0
     * The loop will be naturally skipped if nbf is equal to 0
     */
    for (i = 0; i < nbf; i++)
        printf("%s\n", library[found_indexes[i]]->title);
    printf("\n");

    printf("The total number of pages is: %d\n", compute_total_number_pages(library, index));
}
