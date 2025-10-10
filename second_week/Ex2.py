import turtle

t = turtle.Turtle()

print("Declare a number between 1 and 3")
n = int(input())

if (n < 1 or n > 3):
    print("Error")
    exit()

print("Declare an angle")
a = int(input())

if (a > 360):
    a = a - 360

if (a < 0):
    a = a + 360

d1 = 30 
d2 = 70


for _ in range(3):

    t.penup()
    t.goto(0, 0)
    t.setheading(0)
    t.left(_ * a)
    t.pendown()


    t.left (270)
    t.forward(d1)

    t.left(90)
    t.forward(d2)

    t.left(90)
    t.forward(d1)

    t.left(90)
    t.forward(d2)

    d1 *= n
    d2 *= n


turtle.done()