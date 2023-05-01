class Inheritanceex {
    protected String model;
    protected String brand;
    public Inheritanceex(String model,String brand){
        this.model=model;
        this.brand=brand;
    }
}

class Car1 extends Inheritanceex {
    public Car1(String model,String brand){
        super(model,brand);
    }
    public void type(){
        System.out.println("This car is a Hatch back");
    }
}

class main{
    public static void main(String[] args) {
        Car1 mycar=new Car1("Alto","Suzuki");

        System.out.println(mycar.model);
        System.out.println(mycar.brand);
    }
}