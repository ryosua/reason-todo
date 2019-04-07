let component = ReasonReact.statelessComponent("Component1");

let handleClick = (_event, _self) => Js.log("clicked!");

let make = (~message, _children) => {
  ...component,
  render: self =>
    <div onClick={self.handle(handleClick)}>
      {ReasonReact.string(message)}
    </div>,
};
