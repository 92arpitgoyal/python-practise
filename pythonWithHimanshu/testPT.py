import mysql.connector    
cnx = mysql.connector.connect(user='arpitgoyal', password='admin123', host='mysql.server', database='arpitgoyal$test')

try:
   cursor = cnx.cursor()
   cursor.execute('select * from tablename1')
   result = cursor.fetchall()
   print result
finally:
    cnx.close()