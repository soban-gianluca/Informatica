public class Punto {
    private double x;
    private double y;
    private double direction;

    //costruttori
    public Punto(){
        x = 0;
        y = 0;
        direction = 0;
    }
    
    public Punto(double x, double y, double direction, double distanza){
        this.x = x;
        this.y = y;
        this.direction = direction;
    }

    //getter
    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double getDirection() {
        return direction;
    }

    //setter
    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }

    public void setDirection(double direction) {
        this.direction = direction;
    }

    //toString
    @Override
    public String toString() {
        return "(X: " + x + "\tY: " + y + ")";
    }
}