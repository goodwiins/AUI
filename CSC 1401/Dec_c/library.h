typedef struct {
    char *title;
    char *author;
    int np;
    int edition;
} book_t;

void add_book(book_t* library[], book_t*, int);

/**
 * Returns the index of the first book whose title contains
 * the given keyword (second parameter) ; -1 otherwise 
 */
int search_first_book_by_keyword(book_t* library[], const char*, int);

/**
 * Returns the number of books whose title contains the given keyword
 * Populates the output parameter found_indexes with the indexes
 * of found books
 */ 
int search_all_books_by_keyword(book_t* library[], const char*, int, int found_indexes[]);

int compute_total_number_pages(book_t* library[], int);
