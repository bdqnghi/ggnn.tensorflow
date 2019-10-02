
attention_order = ["114","113","112","104","103","95","93"]
delta_order = ["113","112","114","95","104","95","93"]

order = delta_order
base = 1.0

score_dict = {}
for element in order:
	# score_dict[element] = base
	with open("program_data/statement_test/1/1_subtree_" + element + ".csv","r") as f:
		data = f.readlines()
		for line in data:
			node_id = line.replace("\n","")
			score_dict[node_id] = base

	base = base - 0.1

print(score_dict)
print(len(score_dict.keys()))

for k, v in score_dict.items():
	with open("delta_score_good_example.csv","a") as f1:
		line = str(k) + "," + str(v)
		f1.write(line)
		f1.write("\n")