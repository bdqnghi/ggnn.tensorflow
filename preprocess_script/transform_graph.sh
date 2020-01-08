DATA=sample_data
TRAIN_DIR=../${DATA}/java-small-graph/training
TEST_DIR=../${DATA}/java-small-graph/test
VAL_DIR=../${DATA}/java-small-graph/validation
TRAIN_OUTPUT=../${DATA}/java-small-graph-transformed/training
TEST_OUTPUT=../${DATA}/java-small-graph-transformed/testing
VAL_OUTPUT=../${DATA}/java-small-graph-transformed/validation
NODE_TYPE_PATH=../preprocessed_data/node_type_vocab.txt
NODE_TOKEN_PATH=../preprocessed_data/token_vocab.txt
PYTHON=python3
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --input ${TRAIN_DIR} --output ${TRAIN_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --input ${TEST_DIR} --output ${TEST_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --input ${VAL_DIR} --output ${VAL_OUTPUT} 