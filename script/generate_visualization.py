import os
from utils.utils import scale_attention_score_by_group
import operator

def scale_attention_scores_map(attention_score_map):
    attention_score_sorted = sorted(attention_score_map.items(), key=operator.itemgetter(1))
    attention_score_sorted.reverse()

    node_ids = []
    attention_scores = []
    raw_attention_score_dict = {}
    for element in attention_score_sorted:
        node_ids.append(element[0])
        attention_scores.append(element[1])
        raw_attention_score_dict[element[0]] = element[1]
    attention_score_scaled = scale_attention_score_by_group(attention_scores)

    attention_score_scaled_map = {}
    for i, score in enumerate(attention_score_scaled):
        key = str(node_ids[i])
        attention_score_scaled_map[key] = float(score)

    return attention_score_scaled_map, raw_attention_score_dict


def generate_visualization(pb_path, scaled_attention_path, output_path):
    # attention_path = os.path.join(pb_path.split(".")[0] + ".csv")
    
    normal_node_id_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -H 0 -t -x " + scaled_attention_path + " " + pb_path  + " > " + output_path
    os.system(normal_node_id_cmd)


attention_score_map = {}
kind = "attention"
with open(kind + "_score_good_example.csv","r") as f:
	data = f.readlines()
	for line in data:
		line = line.replace("\n","")
		split = line.split(",")
		attention_score_map[split[0]] = split[1]

pb_path = "program_data/statement_test/1/1.pb"
output = kind +  "_visualization.html"
scaled_attention_path = kind + "_scaled_score_good_example.csv"


attention_score_scaled_map, raw_attention_score_dict = scale_attention_scores_map(attention_score_map)

if os.path.exists(scaled_attention_path):
	os.remove(scaled_attention_path)

with open(scaled_attention_path,"a") as f1:
	for k, v in attention_score_scaled_map.items():
		line = str(k) + "," + str(v)
		f1.write(line)
		f1.write("\n")

# print(attention_score_scaled_map)

generate_visualization(pb_path, scaled_attention_path, output)


