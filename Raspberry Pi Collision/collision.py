from twilio.rest import client
import serial
import time

account_sid = ' '
auth_token = ' '

client = client(account_sid, auth_token)

ser = serial.Serial('/dev/ttyACM0', 9600)
x = True
while(x)
    data = ser.readline().decode().strip()

    if data == '1':
        message = client.api.account.messages.create(body="Bike crash detected. Emergency services in need", from_ = " ", to " " )
        x = False