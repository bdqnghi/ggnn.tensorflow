DATA=transformed_data
DATASET=java-med
PART=test
BOOLEAN_EXCHANGE_DIR=${DATA}/BooleanExchange/${DATASET}/${PART}
LOOP_EXCHANGE_DIR=${DATA}/LoopExchange/${DATASET}/${PART}
PERMUTE_STATEMENT_DIR=${DATA}/PermuteStatement/${DATASET}/${PART}
RENAME_VARIABLE_DIR=${DATA}/RenameVariable/${DATASET}/${PART}
SWITCH_CONDITIONAL_DIR=${DATA}/SwitchConditional/${DATASET}/${PART}
TRY_CATCH_DIR=${DATA}/TryCatch/${DATASET}/${PART}
UNREACHABLE_STATEMENT_DIR=${DATA}/UnreachableStatement/${DATASET}/${PART}
UNUSED_STATEMENT_STATEMENT_DIR=${DATA}/UnusedStatement/${DATASET}/${PART}
NUM_WORKER=16
FBS=1
TXT=0
PKL=0
PB=0
PYTHON=python3
${PYTHON} data_processing.py --path ${BOOLEAN_EXCHANGE_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${LOOP_EXCHANGE_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${PERMUTE_STATEMENT_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${RENAME_VARIABLE_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${SWITCH_CONDITIONAL_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${TRY_CATCH_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${UNREACHABLE_STATEMENT_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}
${PYTHON} data_processing.py --path ${UNUSED_STATEMENT_STATEMENT_DIR} --worker ${NUM_WORKER} --fbs ${FBS} --txt ${TXT} --pkl ${PKL} --pb ${PB}