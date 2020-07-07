import { SingleSignOnRegistry, SSOToken} from "./single_sign_on";

export class Request {
    name: string
    token: SSOToken
    constructor(name: string, token: SSOToken) {
        this.name = name
        this.token = token
    }
}

export class Response{
    text:string
    constructor(text:string) {
        this.text = text
    }
}

export class MyService {

    sso_registry: SingleSignOnRegistry


    constructor(sso_registry: SingleSignOnRegistry) {
        this.sso_registry = sso_registry
    }

    handle_request(request: Request): Response {
        // TODO: check token against SSORegistry
        return new Response(`Hello ${request.name}!`)
    }
}
