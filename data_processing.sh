DATA=sample_data
DATASET=java-small
TRAIN_DIR=${DATA}/${DATASET}/training
TEST_DIR=${DATA}/${DATASET}/test
VAL_DIR=${DATA}/${DATASET}/validation
NUM_WORKER=16
FBS=0
TXT=1
PKL=0
PB=0
PYTHON=python3

${PYTHON} data_processing.py --path ${TRAIN_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
#${PYTHON} data_processing.py --path ${TEST_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
#${PYTHON} data_processing.py --path ${VAL_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}