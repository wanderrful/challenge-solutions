class Answer
	def initialize
		@answer = 0
		@wordList = ""
		getFileInformation
		
		@wordList.each { |word|
			word.size.times { |w|
				sum += convertLetterToInteger(word[w])
				word = sum
			}
			
			if checkWhetherTriangleNumber(word) then
				@answer++ 
			end
		}
		
		puts @answer
	end

	def getFileInformation
		file = File.open("words.txt")
		@wordList = file.read
		@wordList.split(",")
		
		file.close
	end
	
	def convertLetterToInteger(letter)
		return (letter.downcase.ord - 96)
		#the ascii value for the lowercase 'a' is 97 and subsequent letters increase in value by 1 for each letter.
	end
	
	def checkWhetherTriangleNumber(input)
		temp = 1  
		until triangleFunction(temp)>word.max
		do
			if triangleFunction(temp) == input then
				return true
			else
				temp++
				next
			end
		end 
		return false
	end

	def triangleFunction(n)
		return (0.5*n*(n+1))
	end
end

Answer.new