

long int simple_l(long int *xp, long int y)

{

long int t = *xp ^ y;
t = y + 12;
y = t + *xp;
return t;

}


