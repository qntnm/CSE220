structs: is a set of members of possibly different types e.g
```
struct student{
    char first_name[30];
    char last_name[30];
    int final grade;
}
```
student.final_grade = 30;
function pointer is possible. object orinted programming is possible not really usefull in a prodecural language.
address padding for a int and char, e.g a char is at 0x0 if an int with 4 bytes is declared right after it would take up 0x1 to 0x5 instead of incrementing by 4 0x4 through 0x8 in memeory.
unions in c:
union is a set of overlapping members of possibly different types e.g
```
union HW_Register{
    struct bytes{\
    unsigned char byte0;
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
} bytes;
unsigned int word;
}
```
in memory when we have a union they all are within the same memory location. you can change indivual bytes
enum: assignes names to intergers for the purpose of readablility and extensbility 
typedef: is sued to create 
