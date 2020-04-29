DATASET=java-med
DATASET_OUTPUT=${DATASET}-graph-transformed
NODE_TYPE_PATH=../preprocessed_data/node_type_vocab.txt
NODE_TOKEN_PATH=../preprocessed_data/ggnn/${DATASET}/token_vocab.txt
TEST_LABEL_PATH=../preprocessed_data/ggnn/${DATASET}/test_label_vocab.txt
PYTHON=python3
BOOLEAN_EXCHANGE_DATA=../transformed_data/BooleanExchange
BOOLEAN_EXCHANGE_OUTPUT=../${BOOLEAN_EXCHANGE_DATA}/${DATASET_OUTPUT}/testing
BOOLEAN_EXCHANGE_INPUT=../${BOOLEAN_EXCHANGE_DATA}/${DATASET}/test
LOOP_EXCHANGE_DATA=../transformed_data/LoopExchange
LOOP_EXCHANGE_OUTPUT=../${LOOP_EXCHANGE_DATA}/${DATASET_OUTPUT}/testing
LOOP_EXCHANGE_INPUT=../${LOOP_EXCHANGE_DATA}/${DATASET}/test
RENAME_VARIABLE_DATA=../transformed_data/RenameVariable
RENAME_VARIABLE_OUTPUT=../${RENAME_VARIABLE_DATA}/${DATASET_OUTPUT}/testing
RENAME_VARIABLE_INPUT=../${RENAME_VARIABLE_DATA}/${DATASET}/test
SWITCH_CONDITIONAL_DATA=../transformed_data/SwitchConditional
SWITCH_CONDITIONAL_OUTPUT=../${SWITCH_CONDITIONAL_DATA}/${DATASET_OUTPUT}/testing
SWITCH_CONDITIONAL_INPUT=../${SWITCH_CONDITIONAL_DATA}/${DATASET}/test
UNUSED_STATEMENT_DATA=../transformed_data/UnusedStatement
UNUSED_STATEMENT_OUTPUT=../${UNUSED_STATEMENT_DATA}/${DATASET_OUTPUT}/testing
UNUSED_STATEMENT_INPUT=../${UNUSED_STATEMENT_DATA}/${DATASET}/test
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${BOOLEAN_EXCHANGE_INPUT} --output ${BOOLEAN_EXCHANGE_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${LOOP_EXCHANGE_INPUT} --output ${LOOP_EXCHANGE_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${RENAME_VARIABLE_INPUT} --output ${RENAME_VARIABLE_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${SWITCH_CONDITIONAL_INPUT} --output ${SWITCH_CONDITIONAL_OUTPUT} 
${PYTHON} transform_graph.py --node_type_path ${NODE_TYPE_PATH} --node_token_path ${NODE_TOKEN_PATH} --label_path ${TEST_LABEL_PATH} --input ${UNUSED_STATEMENT_INPUT} --output ${UNUSED_STATEMENT_OUTPUT} 