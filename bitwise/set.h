void set_bit(int num,int pos)
{
int set;
set=num | 0x01 << pos;
printf("Set of %d at %d = %d\n",num,pos,set);
}
