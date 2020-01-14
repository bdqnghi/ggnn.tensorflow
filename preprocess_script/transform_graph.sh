DATA=sample_data
TRAIN_DIR=../${DATA}/java-small-graph/training
TEST_DIR=../${DATA}/java-small-graph/test
VAL_DIR=../${DATA}/java-small-graph/validation
TRAIN_OUTPUT=../${DATA}/java-small-graph-transformed/training
TEST_OUTPUT=../${DATA}/java-small-graph-transformed/testing
VAL_OUTPUT=../${DATA}/java-small-graph-transformed/validation
NODE_TYPE_PATH=../preprocessed_data/node_type_vocab.txt
NODE_TOKEN_PATH=../preprocessed_data/token_vocab.txt
TRAIN_LABEL_PATH=../preprocessed_data/train_label_vocab.txt
TEST_LABEL_PATH=../preprocessed_data/test_label_vocab.txt
VAL_LABEL_PATH=../preprocessed_data/val_label_vocab.txt
PYTHON=python3
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TRAIN_LABEL_PATH} --input ${TRAIN_DIR} --output ${TRAIN_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${TEST_DIR} --output ${TEST_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${VAL_LABEL_PATH} --input ${VAL_DIR} --output ${VAL_OUTPUT} 