void clear_bit(int num,int pos)
{
int clear=num&~(0x01<<pos);
printf("clear of %d at %d = %d\n",num,pos,clear);
}
