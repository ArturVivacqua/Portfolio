text = """Contador de Palavras"""


word_count = {}
for word in text.lower().split():
 if word in word_count:
   word_count[word] += 1
 else:
   word_count[word]=1

print(word_count)