http://www.iozone.org/
/**********************iozone_test.sh*****************************/
a=0
while true
do
let a++
iozone -a -g 1G -i0 -i1 -i2 -+n -+d -Rb ioperf.xls
mv ioperf.xls ioperf_$a.xls
sleep 5
done
/************************end*******************************/

/**********************monky.sh*****************************/
while true
do
monkey --pct-syskeys 0  --throttle 500 -v -v -v 30000000  > /dev/null 
sleep 5
done
/************************end*******************************/
