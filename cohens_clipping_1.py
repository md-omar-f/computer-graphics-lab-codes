# p1 and p4 point will check the draw line.
# p1 and p4 are the rectangle's corner points
p1 = (500.0, 600.0)
p4 = (100.0, 200.0)

def assignment(c1x, c1y, c2x, c2y, c3x, c3y, c4x, c4y):
    x_min = min(c1x, c2x, c3x, c4x)
    x_max = max(c1x, c2x, c3x, c4x)
    y_min = min(c1y, c2y, c3y, c4y)
    y_max = max(c1y, c2y, c3y, c4y)
    p1 = (x_min, y_min)
    p4 = (x_max, y_max)


def computeCode(x, y):
    code = 0
    if x < p4[0]:
        code = code | 1
    elif x > p1[0]:
        code = code | 2
    if y < p4[1]:
        code = code | 4
    elif y > p1[1]:
        code = code | 8
    return code


def CohenSutherlandClippingAlgorithm(x1, y1, x2, y2):
    code1 = computeCode(x1, y1)
    code2 = computeCode(x2, y2)
    accept = False
    while True:
        if code1 == 0 and code2 == 0:
            accept = True
            break
        elif (code1 & code2) != 0:
            break
        else:
            x = 1.0
            y = 1.0
            if code1 != 0:
                code_out = code1
            else:
                code_out = code2
            if code_out & 8:
                x = x1 + (x2 - x1) * (p1[1] - y1) / (y2 - y1)
                y = p1[1]
            elif code_out & 4:
                x = x1 + (x2 - x1) * (p4[1] - y1) / (y2 - y1)
                y = p4[1]
            elif code_out & 2:
                y = y1 + (y2 - y1) * (p1[0] - x1) / (x2 - x1)
                x = p1[0]
            elif code_out & 1:
                y = y1 + (y2 - y1) * (p4[0] - x1) / (x2 - x1)
                x = p4[0]
            if code_out == code1:
                x1 = x
                y1 = y
                code1 = computeCode(x1, y1)
            else:
                x2 = x
                y2 = y
                code2 = computeCode(x2, y2)

    if accept:
        print("x1 = ", x1)
        print("y1 = ", y1)
        print("x2 = ", x2)
        print("y2 = ", y2)


    else:
        print("This line can not be drawn as outside the area")

# Drawing from the input and clipping it using Cohen sutherland algorithm
def clip(x1, y1, x2, y2):
    CohenSutherlandClippingAlgorithm(x1, y1, x2, y2)


if __name__ == '__main__':
    # Enter two points for draw a line

    #Enter the highest and the lowest value

    c1x = input("Input c1x: ")
    c1y = input("Input c1y: ")
    c2x = input("Input c2x: ")
    c2y = input("Input c2y: ")
    c3x = input("Input c3x: ")
    c3y = input("Input c3y: ")
    c4x = input("Input c4x: ")
    c4y = input("Input c4y: ")

    # point 1
    x1 = int(input("Point1 x1: "))
    y1 = int(input("point1 y1: "))

    # point 2
    x2 = int(input("Point2 x2: "))
    y2 = int(input("Point2 y2: "))

    # Checking if the line need to be clipped or not?
    clip(x1, y1, x2, y2)