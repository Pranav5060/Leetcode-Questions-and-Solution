//class 
package InnerInterface;
import InnerInterface.InterfaceOuter.InterfaceInner;
public class NestedInterface implements InterfaceInner {
public void InnerMethod() {
int iteration = 0, num = 0, x = 1, y = 1;
while (num < 15) {
y = 1;
iteration = 0;
while (y <= x) {
if (x % y == 0)
iteration++;
y++;
}
if (iteration == 2) {
System.out.printf("%d ", x);
num++;
}
x++;
}
}
public static void main(String args[]) {
NestedInterface obj = new NestedInterface();
obj.InnerMethod();
}
}
