DATA=sample_data
DATASET=java-small
TRAIN_DIR_INPUT=${DATA}/${DATASET}/training
TRAIN_DIR_OUTPUT=${DATA}/${DATASET}-pkl/training
TEST_DIR_INPUT=${DATA}/${DATASET}/test
TEST_DIR_OUTPUT=${DATA}/${DATASET}-pkl/test
VAL_DIR_INPUT=${DATA}/${DATASET}/validation
VAL_DIR_OUTPUT=${DATA}/${DATASET}-pkl/validation
NUM_WORKER=16
PYTHON=python3
${PYTHON} pb_processing.py --input_path ${TRAIN_DIR_INPUT} --output_path ${TRAIN_DIR_OUTPUT} --worker ${NUM_WORKER}
${PYTHON} pb_processing.py --input_path ${TEST_DIR_INPUT} --output_path ${TEST_DIR_OUTPUT} --worker ${NUM_WORKER}
${PYTHON} pb_processing.py --input_path ${VAL_DIR_INPUT} --output_path ${VAL_DIR_OUTPUT} --worker ${NUM_WORKER}