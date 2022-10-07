import random

#TEMPERATURE IN TERMS OF °F
temp =  random.uniform(0,100.00)
print("TEMPERATURE IS: {:.2f}".format(temp))

#HUMIDITY IN TERMS OF %
hum = random.uniform(0.00,100.00)
print("HUMIDITY IS: {:.2f}".format(hum))

#HIGH TEMPERATURE DETECTION
if(temp>89.00):
    {
    print("HIGH TEMPERATURE DETECTED!")
    }
else:
    {
    print("TEMPERATURE IS IN LIMIT")
    }

