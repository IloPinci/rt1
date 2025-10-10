import turtle

t = turtle.Turtle()

print("Declare the base of the rectangle:")
b = int(input())

print("Declare the height of the rectangle:")
h = int(input())

t.penup()
t.goto(0-b/2, 0-h/2)
t.pendown()



t.forward(b)
t.left(90)
t.forward(h)
t.left(90)
t.forward(b)
t.left(90)
t.forward(h)


turtle.done()