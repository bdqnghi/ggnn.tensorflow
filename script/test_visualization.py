import os
import copy


def generate_visualization(pb_path, scaled_attention_path, output_path):
    # attention_path = os.path.join(pb_path.split(".")[0] + ".csv")
    
    normal_node_id_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -H 0 -t -x " + scaled_attention_path + " " + pb_path  + " > " + output_path
    os.system(normal_node_id_cmd)
    # return normal_html_path

all_solutions = [[48, 41, 20], [28, 48, 41, 63, 89, 79], [28, 48, 20, 63, 89, 79], [28, 48, 41, 20, 89, 79, 59], [28, 41, 20, 63, 89, 79, 59, 37], [28, 48, 41, 20, 63, 89, 79, 59, 37], [28, 48, 41, 20, 63, 89, 79, 59, 30, 37, 50], [28, 48, 41, 20, 63, 89, 59, 37, 30, 50, 106, 117]]

pb_path = "program_data/statement_test/5/100.pb"
attention_score_path =  os.path.join(pb_path.split(".")[0] + "_raw" + ".csv")

attention_score_dict = {}
with open(attention_score_path,"r") as f1:
    data = f1.readlines()
    for line in data:
        line = line.replace("\n","")
        splits = line.split(",")
        attention_score_dict[splits[0]] = 0.2

print(attention_score_dict)
for solution in all_solutions:

    # Loading subtree
    clone_attention_score_dict = copy.deepcopy(attention_score_dict)

    for component_id in solution:
        subtree_ids_path =  os.path.join(pb_path.split(".")[0] + "_subtree_" + str(component_id) + ".csv")
        with open(subtree_ids_path,"r") as f:
            data = f.readlines()
            for line in data:
                line = line.replace("\n","")
                clone_attention_score_dict[line] = 0.9

    name = "-".join(str(x) for x in solution)
    scaled_attention_score_path =  os.path.join(pb_path.split(".")[0] + str(name) + "_important" + ".csv")
    output_path =  os.path.join(pb_path.split(".")[0] + str(name) + "_important" + ".html")

    with open(scaled_attention_score_path,"w") as f2:
        for node_id, score in clone_attention_score_dict.items():
            line = str(node_id) + "," + str(score)
            f2.write(line)
            f2.write("\n")

    generate_visualization(pb_path, scaled_attention_score_path, output_path)
