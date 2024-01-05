#include<iostream>

// input in a string of directions (e.g. NNWESEWN)
// output the final x and y coordinates if the directions were followed sequentially
int main()
{

    char route[100];
    std::cin.getline(route, 100);

    int x = 0;
    int y = 0;

    for(int i=0; route[i] !='\0'; i++)
    {
        if(route[i]=='S')
        {
            y--;
        }
        if(route[i]=='N')
        {
            y++;
        }

        if(route[i]=='W')
        {
            x--;
        }
        if(route[i]=='E')
        {
            x++;
        }

    }

    std::cout<<"X-COORDINATE: " << x << std::endl; 
    std::cout<<"Y-COORDINATE: " << y << std::endl; 

}