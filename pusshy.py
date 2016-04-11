import sys
import mysql.connector

#part that connects to database, hence the exceptionhandling
if len(sys.argv) == 8:
	try:
		group = str(sys.argv[1])
		answer1 = str(sys.argv[2])
		answer2 = str(sys.argv[3])
		answer3 = str(sys.argv[4])
		answer4 = str(sys.argv[5])
		answer5 = str(sys.argv[6])
		correct = str(sys.argv[7])
		conn = mysql.connector.connect(host="localhost",user = "public", password = "public", db = "results", port = 3306)
		cursor = conn.cursor()
		query = ("INSERT INTO `results`.`answers` (`group`, `answer1`,`answer2`,`answer3`,`answer4`,`answer5`,`correct`) VALUES ('"+group+"', '"+answer1+"', '"+answer2+"', '"+answer3+"', '"+answer4+"', '"+answer5+"', '"+correct+"');")
		cursor.execute(query)
		conn.commit()
		cursor.close()
		conn.close()
		print ("\npush seq done\n")

	#will print a message that will be interpreted by the java GUI and notify the user
	except mysql.connector.Error as err:
		if "Duplicate" in "Something went wrong: {}".format(err):
			print ("\n\nGroep heeft antwoord al geregistreerd!\n\n")
		else:
			print("Something went wrong: {}".format(err))

#will notify the user that the arguments dont meet the expectations
else:
	print ("\nArguments dont meet the requirements.\n")
