const express = require('express');
const router = express.Router();

const itemCliente = require("./controllers/cliente");
const itemFuncionario = require("./controllers/funcionario");
const itemVeiculo = require("./controllers/veiculo");

const teste = (req, res) => {
    res.json("API respondendo");
};

router.get("/", teste);

router.get("/cliente", itemCliente.readCliente);
router.post("/cliente", itemCliente.createCliente);
router.put("/cliente/:id_cliente", itemCliente.updateCliente);
router.delete("/cliente/:id_cliente", itemCliente.delCliente);

router.get("/funcionario", itemFuncionario.readFuncionario);
router.post("/funcionario", itemFuncionario.createFuncionario);
router.put("/funcionario/:id_funcionario", itemFuncionario.updateFuncionario);
router.delete("/funcionario/:id_funcionario", itemFuncionario.delFuncionario);

router.get("/veiculo", itemVeiculo.readVeiculo);
router.post("/veiculo", itemVeiculo.createVeiculo);
router.put("/veiculo/:id_veiculo", itemVeiculo.updateVeiculo);
router.delete("/veiculo/:id_veiculo", itemVeiculo.delVeiculo);

module.exports = router;