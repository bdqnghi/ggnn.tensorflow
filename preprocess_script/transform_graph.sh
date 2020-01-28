DATA=sample_data
DATASET=java-small
DATASET_OUTPUT=java-small-graph-transformed
TRAIN_DIR=../${DATA}/${DATASET}/training
TEST_DIR=../${DATA}/${DATASET}/test
VAL_DIR=../${DATA}/${DATASET}/validation
TRAIN_OUTPUT=../${DATA}/${DATASET_OUTPUT}/training
TEST_OUTPUT=../${DATA}/${DATASET_OUTPUT}/testing
VAL_OUTPUT=../${DATA}/${DATASET_OUTPUT}/validation
NODE_TYPE_PATH=../preprocessed_data/${DATASET}/node_type_vocab.txt
NODE_TOKEN_PATH=../preprocessed_data/${DATASET}/token_vocab.txt
TRAIN_LABEL_PATH=../preprocessed_data/${DATASET}/train_label_vocab.txt
TEST_LABEL_PATH=../preprocessed_data/${DATASET}/test_label_vocab.txt
VAL_LABEL_PATH=../preprocessed_data/${DATASET}/val_label_vocab.txt
PYTHON=python3
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TRAIN_LABEL_PATH} --input ${TRAIN_DIR} --output ${TRAIN_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${TEST_DIR} --output ${TEST_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${VAL_LABEL_PATH} --input ${VAL_DIR} --output ${VAL_OUTPUT} 