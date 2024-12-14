/*Int list*/


struct iconList{
    int elem;
    struct iconList* next;
} iconList;

typedef struct iconList* iConList;

iConList iConlist_init(int num);
void iConlist_append(iConList list, int num);
void iConlist_print(iConList list, char* delim);

/*Double list*/


/*String list*/
